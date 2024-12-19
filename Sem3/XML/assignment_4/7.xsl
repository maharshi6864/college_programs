<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
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
              <td>status</td>
            </tr>
          </thead>
          <tbody>
            <xsl:for-each select="email/student">
              <!--<xsl:if
              test="{rank=5}">-->
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
                    <xsl:when test="rank &lt;=5 "><p style="color:green">top 5 student</p></xsl:when>
                    <xsl:when test="rank &gt;=5 and  rank &lt;=10 "><p style="color:yellow">top 10
    student</p></xsl:when>
                    <xsl:otherwise><p style="color:red">average student</p></xsl:otherwise>
                  </xsl:choose>
                </td>
              </tr>
              <!--</xsl:if>-->
            </xsl:for-each>
          </tbody>
        </table>
      </body>

    </html>
  </xsl:template>
</xsl:stylesheet>