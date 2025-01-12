declare
   aa number;
   bb number;
begin
   aa := &aaa;
   bb := &bbb;
   dbms_output.put_line('before swapping ');
   dbms_output.put_line('value of aa : ' || aa);
   dbms_output.put_line('value of bb : ' || bb);
   aa := bb + aa;
   bb := aa - bb;
   aa := aa - bb;
   dbms_output.put_line('after swapping ');
   dbms_output.put_line('value of aa : ' || aa);
   dbms_output.put_line('value of bb : ' || bb);
end;
/