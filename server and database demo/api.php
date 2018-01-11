<?php  if ($_GET['data'] && ($_GET['token'] == "weixin")) {
		//you can change your token ,but the token should be same as the token in arduino + esp8266 code
        $con = mysql_connect(SAE_MYSQL_HOST_M.':'.SAE_MYSQL_PORT,SAE_MYSQL_USER,SAE_MYSQL_PASS); 
        $data = $_GET['data'];
        mysql_select_db("app_smart8266", $con);
 
        $result = mysql_query("SELECT * FROM switch");
        while($arr = mysql_fetch_array($result)){
                if ($arr['ID'] == 1) {
                        $state = $arr['state'];
                }
        }
        $dati = date("h:i:sa");
        $sql ="UPDATE sensor SET timestamp='$dati',data = '$data'
        WHERE ID = '1'";
        
    	
    	
    
        if(!mysql_query($sql,$con)){
            die('Error: ' . mysql_error());
        }
        mysql_close($con);
        echo "{".$state."}";// this is the symbol of the beginning of the data
}else{
        echo "Permission Denied";//if the token is wrong it will show Permission Denied
}
 
?>