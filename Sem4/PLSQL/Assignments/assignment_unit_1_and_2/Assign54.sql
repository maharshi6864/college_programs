declare
   costprice    double precision;
   sellingprice double precision;
   profitorloss double precision;
begin
   costprice := &costprice;
   sellingprice := &sellingprice;
   profitorloss := sellingprice - costprice;
   if sellingprice > costprice then
      dbms_output.put_line('There is a profit of : ' || profitorloss);
   else
      dbms_output.put_line('There is a loss of : ' || profitorloss);
   end if;
end;
/