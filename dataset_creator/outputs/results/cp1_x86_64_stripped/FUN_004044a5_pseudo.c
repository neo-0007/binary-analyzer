
void FUN_004044a5(undefined4 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined1 *local_50 [2];
  undefined1 local_40 [16];
  undefined8 local_30;
  
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_006231b0(0x20);
                    /* try { // try from 004044ef to 004044f1 has its CatchHandler @ 00404558 */
  (**(code **)(PTR_PTR_0093d6e0 + 0x20))(local_50,&PTR_PTR_0093d6e0,param_1);
                    /* try { // try from 004044fd to 00404501 has its CatchHandler @ 00404540 */
  FUN_006c9ce0(puVar1,local_50);
  if (local_50[0] != local_40) {
    thunk_FUN_007104f0();
  }
  *(undefined4 *)(puVar1 + 2) = param_1;
  puVar1[3] = &PTR_PTR_0093d6e0;
  *puVar1 = &PTR_FUN_009398e8;
                    /* WARNING: Subroutine does not return */
  FUN_00624060(puVar1,&PTR_PTR_009397a0,FUN_006c9eb0);
}

