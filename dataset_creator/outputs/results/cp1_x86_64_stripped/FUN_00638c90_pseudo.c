
long * FUN_00638c90(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  
  lVar1 = *(long *)(*param_2 + -0x18);
  if (lVar1 != 0) {
    lVar2 = *param_1;
    uVar3 = *(long *)(lVar2 + -0x18) + lVar1;
    if ((*(ulong *)(lVar2 + -0x10) < uVar3) || (0 < *(int *)(lVar2 + -8))) {
      FUN_00638bc0(param_1,uVar3);
    }
    puVar4 = (undefined1 *)(*param_1 + *(long *)(*param_1 + -0x18));
    if (lVar1 == 1) {
      *puVar4 = *(undefined1 *)*param_2;
    }
    else {
      thunk_FUN_00713a50(puVar4,(undefined1 *)*param_2,lVar1);
    }
    puVar4 = (undefined1 *)*param_1;
    if (puVar4 != &DAT_009452b8) {
      *(undefined4 *)(puVar4 + -8) = 0;
      *(ulong *)(puVar4 + -0x18) = uVar3;
      puVar4[uVar3] = 0;
    }
  }
  return param_1;
}

