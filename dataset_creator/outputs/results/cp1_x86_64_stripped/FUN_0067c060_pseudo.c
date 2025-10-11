
void FUN_0067c060(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_00937850;
                    /* try { // try from 0067c088 to 0067c08c has its CatchHandler @ 0067c0f3 */
  uVar2 = FUN_006256a0();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_00937888;
  if ((*param_2 != 'C') || (param_2[1] != '\0')) {
    iVar1 = thunk_FUN_00712780(param_2,"POSIX");
    if (iVar1 != 0) {
                    /* try { // try from 0067c0d2 to 0067c0e3 has its CatchHandler @ 0067c0ea */
      FUN_006c4530(param_1 + 2);
      FUN_006c4500(param_1 + 2,param_2,0);
      return;
    }
  }
  return;
}

