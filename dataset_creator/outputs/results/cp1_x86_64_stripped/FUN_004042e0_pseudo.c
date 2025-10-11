
void FUN_004042e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_30 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_006231b0(0x30);
  uVar2 = FUN_006e2820(param_1);
  local_28 = FUN_006c9b60();
  local_30[0] = 1;
                    /* try { // try from 00404333 to 00404337 has its CatchHandler @ 00404382 */
  FUN_006c9be0(puVar1,uVar2,local_30);
  *puVar1 = &PTR_FUN_00939720;
  uVar2 = FUN_0062be40(puVar1);
                    /* try { // try from 00404356 to 0040435a has its CatchHandler @ 00404371 */
  FUN_006ca830(puVar1 + 4,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00624060(puVar1,&PTR_PTR_00939658,FUN_006c9460);
}

