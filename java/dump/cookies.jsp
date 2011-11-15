<%@page contentType="text/html" pageEncoding="UTF-8"%>

<%@ page import="java.util.*" %>

<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Java Snippet</title>
    </head>
    <body>


        <%
        // Print Cookies
        // Require: java.util.*
        Cookie[] cookies = request.getCookies();
        for( int i = 0; i <cookies.length; ++i ){
          out.println( "Domain: " + cookies[i].getDomain()+ "<br />"
                        + "Name: " + cookies[i].getName() + "<br />"  
                        + "Path: " + cookies[i].getPath() + "<br />"
                        + "Value: " + cookies[i].getValue() + "<br />"
                        + "<hr />"
                        );
        }
        %>

    </body>
</html>