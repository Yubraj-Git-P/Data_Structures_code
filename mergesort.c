<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Styled Page</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <p id="p1">This is the first paragraph.</p>
    <p id="p2">This is the second paragraph.</p>
    <div id="dv1">This is a div element.</div>
</body>
</html>



/* Styles for paragraphs */
#p1, #p2 {
    margin-top: 100px;
    margin-left: 80px;
    display: block;
}

/* Styles for the div */
#dv1 {
    padding-left: 30px;
    padding-right: 25px;
    background-color: blue;
    color: red;
    font-family: Verdana, sans-serif;
    display: none;
}
