
void FUN_006a4810(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_006c4d20(param_1,param_3);
  *param_1 = &PTR_FUN_00939088;
  if ((*param_2 != 'C') || (param_2[1] != '\0')) {
    iVar1 = thunk_FUN_00712780(param_2,"POSIX");
    if (iVar1 != 0) {
                    /* try { // try from 006a486a to 006a487b has its CatchHandler @ 006a4882 */
      FUN_006c4530(param_1 + 2);
      FUN_006c4500(param_1 + 2,param_2,0);
      return;
    }
  }
  return;
}

