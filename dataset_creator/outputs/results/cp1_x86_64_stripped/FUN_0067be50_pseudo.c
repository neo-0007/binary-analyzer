
void FUN_0067be50(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_006c4c90(param_1,param_3);
  *param_1 = &PTR_FUN_00937bc8;
  if ((*param_2 != 'C') || (param_2[1] != '\0')) {
    iVar1 = thunk_FUN_00712780(param_2,"POSIX");
    if (iVar1 != 0) {
                    /* try { // try from 0067beaa to 0067bebb has its CatchHandler @ 0067bec2 */
      FUN_006c4530(param_1 + 2);
      FUN_006c4500(param_1 + 2,param_2,0);
      return;
    }
  }
  return;
}

