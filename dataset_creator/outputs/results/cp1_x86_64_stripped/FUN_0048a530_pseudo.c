
void FUN_0048a530(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  long alStack_68 [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  
  lVar4 = -(-((param_3 + -0x3f) - (long)auStack_40) & 0x3c0U);
  *(undefined8 *)((long)alStack_68 + lVar4 + 0x18) = param_2;
  *(BADSPACEBASE **)(auStack_48 + lVar4) = register0x00000020;
  iVar1 = *(int *)(param_3 + 0xf0);
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  *(long *)((long)alStack_68 + lVar4 + 8) = param_3;
  *(ulong *)((long)alStack_68 + lVar4 + 0x10) = param_3 + (ulong)(uint)(iVar1 << 4);
  *(undefined8 *)((long)alStack_68 + lVar4) = 0x48a5b6;
  uVar5 = FUN_0048a240(param_1,param_2,uVar5);
  puVar3 = *(undefined4 **)((long)alStack_68 + lVar4 + 0x18);
  *puVar3 = uVar5;
  puVar3[1] = uVar2;
  puVar3[2] = uVar6;
  puVar3[3] = extraout_EDX;
  return;
}

