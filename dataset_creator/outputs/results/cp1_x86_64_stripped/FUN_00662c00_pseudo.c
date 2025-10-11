
void FUN_00662c00(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_009361a8;
                    /* try { // try from 00662c28 to 00662c2c has its CatchHandler @ 00662c93 */
  uVar2 = FUN_006256a0();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_009361e0;
  if ((*param_2 != 'C') || (param_2[1] != '\0')) {
    iVar1 = thunk_FUN_00712780(param_2,"POSIX");
    if (iVar1 != 0) {
                    /* try { // try from 00662c72 to 00662c83 has its CatchHandler @ 00662c8a */
      FUN_006c4530(param_1 + 2);
      FUN_006c4500(param_1 + 2,param_2,0);
      return;
    }
  }
  return;
}

