
void FUN_0064eb20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)*param_2;
  FUN_006c4c90(param_1,param_3);
  *param_1 = &PTR_FUN_00937bc8;
  if ((*pcVar1 != 'C') || (pcVar1[1] != '\0')) {
    iVar2 = thunk_FUN_00712780(pcVar1,"POSIX");
    if (iVar2 != 0) {
                    /* try { // try from 0064eb7a to 0064eb8b has its CatchHandler @ 0064eb92 */
      FUN_006c4530(param_1 + 2);
      FUN_006c4500(param_1 + 2,pcVar1,0);
      return;
    }
  }
  return;
}

