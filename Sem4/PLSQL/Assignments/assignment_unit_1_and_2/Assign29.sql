declare
   aa number;
   bb number;
   cc number;
begin
   aa := &aaa;
   bb := &bbb;
   dbms_output.put_line('before swapping ');
   dbms_output.put_line('value of aa : ' || aa);
   dbms_output.put_line('value of bb : ' || bb);
   cc := aa;
   aa := bb;
   bb := cc;
   dbms_output.put_line('after swapping ');
   dbms_output.put_line('value of aa : ' || aa);
   dbms_output.put_line('value of bb : ' || bb);
end;
/