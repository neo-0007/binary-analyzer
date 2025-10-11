
void FUN_00404399(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_30 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_006231b0(0x30);
  if (param_2 == 0) {
    local_28 = FUN_006c9b60();
    local_30[0] = 1;
  }
  else {
    local_28 = FUN_006ca1b0();
    local_30[0] = param_2;
  }
  uVar2 = FUN_006e2820(param_1);
                    /* try { // try from 00404404 to 00404408 has its CatchHandler @ 00404453 */
  FUN_006c9be0(puVar1,uVar2,local_30);
  *puVar1 = &PTR_FUN_00939720;
  uVar2 = FUN_0062be40(puVar1);
                    /* try { // try from 00404427 to 0040442b has its CatchHandler @ 00404442 */
  FUN_006ca830(puVar1 + 4,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00624060(puVar1,&PTR_PTR_00939658,FUN_006c9460);
}

