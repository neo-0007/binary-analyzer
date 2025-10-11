
int FUN_0078dd00(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  long local_68;
  long lStack_60;
  long local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0070a340(&DAT_0093eaa0);
  uVar4 = (ulong)DAT_0093eb68;
  if (PTR_DAT_0093eb60 != (undefined *)0x0) {
    puVar3 = PTR_DAT_0093eb60;
    do {
      puVar1 = *(undefined8 **)(puVar3 + 0x28);
      local_88 = *puVar1;
      local_80 = puVar1[1];
      local_50 = 0;
      local_70 = *(undefined2 *)(puVar1 + 0x57);
      uStack_78 = puVar1[0x55];
      local_68 = DAT_0093eb20;
      lStack_60 = DAT_0093eb20 - uVar4;
      local_58 = puVar1[0x8c];
      if (local_58 != 0) {
        local_50 = FUN_0078a640();
      }
                    /* try { // try from 0078dd63 to 0078dde4 has its CatchHandler @ 0078de2c */
      iVar2 = (*param_1)(&local_88,0x40,param_2);
      if (iVar2 != 0) goto LAB_0078ddf3;
      puVar3 = *(undefined **)(puVar3 + 0x18);
    } while (puVar3 != (undefined *)0x0);
  }
  iVar2 = 0;
LAB_0078ddf3:
  FUN_0070abb0(&DAT_0093eaa0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

