
void FUN_0064eca0(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_009354e8;
                    /* try { // try from 0064ecc8 to 0064eccc has its CatchHandler @ 0064ed33 */
  uVar2 = FUN_006256a0();
  param_1[2] = uVar2;
  *param_1 = &PTR_LAB_00935520;
  if ((*param_2 != 'C') || (param_2[1] != '\0')) {
    iVar1 = thunk_FUN_00712780(param_2,"POSIX");
    if (iVar1 != 0) {
                    /* try { // try from 0064ed12 to 0064ed23 has its CatchHandler @ 0064ed2a */
      FUN_006c4530(param_1 + 2);
      FUN_006c4500(param_1 + 2,param_2,0);
      return;
    }
  }
  return;
}

