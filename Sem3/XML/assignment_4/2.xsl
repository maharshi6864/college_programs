<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.1">
	<xsl:template match="/">
		<html>
			<head>
				<title>Order Details</title>
			</head>
			<body>
				<table border='1'>
					<thead>
						<tr>
							<th colspan="6">
								<h2>Order Detials</h2>
							</th>
						</tr>
						<tr>
							<th>Order Number</th>
							<th>Order Date</th>
							<th>Order Amount</th>
							<th>Item Price</th>
							<th>Item Name</th>
							<th>Quantity</th>
						</tr>
					</thead>
					<tbody>
						<xsl:for-each select="orderDetails">
							<tr>
								<td>
									<xsl:value-of select="orderNumber"></xsl:value-of>
								</td>
								<td>
									<xsl:value-of select="orderDate"></xsl:value-of>
								</td>
								<td>
									<xsl:value-of select="orderAmount"></xsl:value-of>
								</td>
								<td>
									<xsl:value-of select="itemPrice"></xsl:value-of>
								</td>
								<td>
									<xsl:value-of select="itemName"></xsl:value-of>
								</td>
								<td>
									<xsl:value-of select="quantity"></xsl:value-of>
								</td>
							</tr>
						</xsl:for-each>
					</tbody>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>