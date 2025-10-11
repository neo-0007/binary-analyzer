
void FUN_006250f0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0070abb0(*param_1);
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined8 *)FUN_006231b0(8);
  *puVar2 = &PTR_FUN_00933a00;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00625132 to 00625136 has its CatchHandler @ 00625137 */
  FUN_00624060(puVar2,&PTR_PTR_009339b0,FUN_00622f20);
}

