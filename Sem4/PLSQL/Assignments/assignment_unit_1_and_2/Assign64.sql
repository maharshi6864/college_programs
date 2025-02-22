declare
   qty         number; -- Quantity purchased
   price       number; -- Price per item
   discount    number := 0; -- Discount percentage
   expenditure number; -- Total expenditure after discount
begin
    -- Accept inputs for quantity and price per item
   qty := &qty;
   price := &price;

    -- Determine discount based on quantity
   if qty > 1000 then
      discount := 20; -- 20% discount for quantity > 1000
   end if;

    -- Calculate expenditure after discount
   expenditure := qty * price * ( 1 - discount / 100 );

    -- Output the results
   dbms_output.put_line('Quantity Purchased: ' || qty);
   dbms_output.put_line('Price per Item: Rs. ' || price);
   dbms_output.put_line('Discount Applied: '
                        || discount
                        || '%');
   dbms_output.put_line('Total Expenditure: Rs. ' || expenditure  );
end;
/