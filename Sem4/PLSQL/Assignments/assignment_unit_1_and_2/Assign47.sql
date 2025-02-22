declare
   lmr     double precision;
   cmr     double precision;
   totbill double precision;
begin
   lmr := &lmr;
   cmr := &cmr;
   totbill := cmr - lmr;
   if totbill < 100 then
      totbill := totbill * 0.50;
   elsif totbill < 200 then
      totbill := 100 * 0.50 + ( totbill - 100 ) * 0.25;
   elsif totbill > 200 then
      totbill := totbill - 1.25;
   else
      dbms_output.put_line('Bill is : ' || totbill);
   end if;
   dbms_output.put_line('Bill is : ' || totbill);
end;
/