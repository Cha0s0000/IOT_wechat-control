-- phpMyAdmin SQL Dump
-- version 3.3.8.1
-- http://www.phpmyadmin.net
--
-- 主机: w.rdc.sae.sina.com.cn:3307
-- 生成日期: 2016 年 06 月 01 日 17:17
-- 服务器版本: 5.6.23
-- PHP 版本: 5.3.3

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- 数据库: `app_smart8266`
--

-- --------------------------------------------------------

--
-- 表的结构 `sensor`
--

CREATE TABLE IF NOT EXISTS `sensor` (
  `ID` int(11) NOT NULL,
  `timestamp` varchar(15) NOT NULL,
  `data` double NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- 转存表中的数据 `sensor`
--

INSERT INTO `sensor` (`ID`, `timestamp`, `data`) VALUES
(1, '05:06:05pm', 1);

-- --------------------------------------------------------

--
-- 表的结构 `switch`
--

CREATE TABLE IF NOT EXISTS `switch` (
  `ID` int(11) NOT NULL,
  `timestamp` int(15) NOT NULL,
  `state` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- 转存表中的数据 `switch`
--

INSERT INTO `switch` (`ID`, `timestamp`, `state`) VALUES
(1, 5, 0);
