
void FUN_00662a80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)*param_2;
  FUN_006c4d20(param_1,param_3);
  *param_1 = &PTR_FUN_00939088;
  if ((*pcVar1 != 'C') || (pcVar1[1] != '\0')) {
    iVar2 = thunk_FUN_00712780(pcVar1,"POSIX");
    if (iVar2 != 0) {
                    /* try { // try from 00662ada to 00662aeb has its CatchHandler @ 00662af2 */
      FUN_006c4530(param_1 + 2);
      FUN_006c4500(param_1 + 2,pcVar1,0);
      return;
    }
  }
  return;
}

