
void FUN_006a4a20(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_00938c90;
                    /* try { // try from 006a4a48 to 006a4a4c has its CatchHandler @ 006a4ab3 */
  uVar2 = FUN_006256a0();
  param_1[2] = uVar2;
  *param_1 = &PTR_LAB_00938cc8;
  if ((*param_2 != 'C') || (param_2[1] != '\0')) {
    iVar1 = thunk_FUN_00712780(param_2,"POSIX");
    if (iVar1 != 0) {
                    /* try { // try from 006a4a92 to 006a4aa3 has its CatchHandler @ 006a4aaa */
      FUN_006c4530(param_1 + 2);
      FUN_006c4500(param_1 + 2,param_2,0);
      return;
    }
  }
  return;
}

