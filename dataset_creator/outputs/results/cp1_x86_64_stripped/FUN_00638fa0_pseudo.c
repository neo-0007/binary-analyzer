
long * FUN_00638fa0(long *param_1,ulong param_2,char param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  char *pcVar4;
  
  if (param_2 != 0) {
    lVar2 = *param_1;
    if (0x3ffffffffffffff9U - *(long *)(lVar2 + -0x18) < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00403998("basic_string::append");
    }
    uVar1 = param_2 + *(long *)(lVar2 + -0x18);
    if ((*(ulong *)(lVar2 + -0x10) < uVar1) || (0 < *(int *)(lVar2 + -8))) {
      FUN_00638bc0(param_1,uVar1);
    }
    pcVar4 = (char *)(*param_1 + *(long *)(*param_1 + -0x18));
    if (param_2 == 1) {
      *pcVar4 = param_3;
    }
    else {
      thunk_FUN_00713720(pcVar4,(int)param_3,param_2);
    }
    puVar3 = (undefined1 *)*param_1;
    if (puVar3 != &DAT_009452b8) {
      *(undefined4 *)(puVar3 + -8) = 0;
      *(ulong *)(puVar3 + -0x18) = uVar1;
      puVar3[uVar1] = 0;
    }
  }
  return param_1;
}

