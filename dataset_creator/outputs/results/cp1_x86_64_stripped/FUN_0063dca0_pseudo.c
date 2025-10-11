
void FUN_0063dca0(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_0063dad0(param_1,0,0,param_3);
  *param_1 = &PTR_FUN_00935288;
  if ((*param_2 != 'C') || (param_2[1] != '\0')) {
    iVar3 = thunk_FUN_00712780(param_2,"POSIX");
    if (iVar3 != 0) {
                    /* try { // try from 0063dcfa to 0063dd0b has its CatchHandler @ 0063dd2e */
      FUN_006c4530(param_1 + 2);
      FUN_006c4500(param_1 + 2,param_2,0);
      lVar1 = param_1[2];
      param_1[4] = *(undefined8 *)(lVar1 + 0x78);
      uVar2 = *(undefined8 *)(lVar1 + 0x68);
      param_1[5] = *(undefined8 *)(lVar1 + 0x70);
      param_1[6] = uVar2;
      return;
    }
  }
  return;
}

