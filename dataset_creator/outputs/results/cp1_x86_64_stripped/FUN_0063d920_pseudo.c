
void FUN_0063d920(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_0063d880(param_1,param_3);
  *param_1 = &PTR_FUN_009351f0;
  if ((*param_2 != 'C') || (param_2[1] != '\0')) {
    iVar1 = thunk_FUN_00712780(param_2,"POSIX");
    if (iVar1 != 0) {
                    /* try { // try from 0063d97a to 0063d98b has its CatchHandler @ 0063d999 */
      FUN_006c4530(param_1 + 2);
      FUN_006c4500(param_1 + 2,param_2,0);
      FUN_0063e320(param_1);
      return;
    }
  }
  return;
}

