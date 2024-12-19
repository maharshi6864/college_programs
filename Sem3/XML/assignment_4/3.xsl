<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.1">
	<xsl:template match="/">
		<html>
			<head>
				<title>BOOKS DETAILS</title>			
			</head>
			<body>
				<table border='1'>
					<thead>
						<tr>
							<th colspan="6">
								<h2>Book Details</h2>
							</th>
						</tr>
						<tr>
							<th>Sr.no</th>
							<th>Author</th>
							<th>Year</th>
							<th>Publisher</th>
						</tr>
					</thead>
					<tbody>
						<xsl:for-each select="books/book">
							<xsl:if test="year > 1998">
								<tr>
								<td><xsl:value-of select="position()"></xsl:value-of></td>
								<td><xsl:value-of select="author"></xsl:value-of></td>
								<td><xsl:value-of select="year"></xsl:value-of></td>
								<td><xsl:value-of select="publisher"></xsl:value-of></td>
							</tr>
							</xsl:if>
						</xsl:for-each>
					</tbody>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>