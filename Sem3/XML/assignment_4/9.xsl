<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.1">
	<xsl:template match="/">
		<html>
			   <head>
        <title>Student Data</title>
        <style>
          table {
          width: 100%;
          border-collapse: collapse;
          }

          html,
          body {
          width: 100%;
          height: 100%;
          box-sizing: border-box;
          }

          body {
          display: flex;
          justify-content: center;
          align-items: center;
          }
        </style>
      </head>

      <body>
        <table border="1" style="width: 300px;font-size: 20px;">
          <thead>
            <tr>
              <td colspan="5">
                <h1 style="text-align: center;margin: 10px;">Students data</h1>
              </td>
            </tr>
            <tr>
              <td>Roll No</td>
              <td>Name</td>
              <td>Marks</td>
              <td>Rank </td>
              <td>result</td>
            </tr>
          </thead>
          <tbody>
            <xsl:for-each select="email/student">
              
              
              <xsl:sort select="rollNo" order="ascending"  data-type="number"></xsl:sort>
            		<tr>
                <td>
                  <xsl:value-of select="rollNo"></xsl:value-of>
                </td>
                <td>
                  <xsl:value-of select="name"></xsl:value-of>
                </td>
                <td>
                  <xsl:value-of select="marks"></xsl:value-of>
                </td>
                <td>
                  <xsl:value-of select="rank"></xsl:value-of>
                </td>
                <td>
                  <xsl:choose>
                    <xsl:when test="marks &gt;=70 "><p style="color:green">Dist</p></xsl:when>
                    <xsl:when test="marks &gt;=60 and  marks &lt;70 "><p style="color:yellow">First</p></xsl:when>
                        <xsl:when test="marks &gt;=40 and  marks &lt;60 "><p style="color:yellow">Second</p></xsl:when>
                    <xsl:otherwise><p style="color:red">FAIL</p></xsl:otherwise>
                  </xsl:choose>
                </td>
              </tr>
              
            </xsl:for-each>
          </tbody>
        </table>
      </body>
		</html>
	</xsl:template>
</xsl:stylesheet>