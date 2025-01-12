declare
   side  number;
   areaa number;
begin
   side := &side;
   areaa := side * side;
   dbms_output.put_line('area of square : ' || areaa);
end;
/