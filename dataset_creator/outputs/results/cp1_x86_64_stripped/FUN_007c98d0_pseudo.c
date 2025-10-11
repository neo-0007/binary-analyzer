
undefined8 FUN_007c98d0(undefined8 param_1,uint param_2,uint param_3,long param_4,ushort *param_5)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort *puVar6;
  long in_FS_OFFSET;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ushort *)(param_4 + 4) << 8 | *(ushort *)(param_4 + 4) >> 8;
  if (uVar1 != 0) {
    puVar6 = (ushort *)(param_4 + 0xc);
    uVar5 = (uint)uVar1;
    do {
      uVar5 = uVar5 - 1;
      iVar2 = FUN_007c8450(param_4,param_5,puVar6,local_448,0x402);
      if (iVar2 < 0) {
LAB_007c9995:
        uVar4 = 0xffffffff;
        goto LAB_007c999a;
      }
      puVar3 = (ushort *)((long)iVar2 + (long)puVar6);
      puVar6 = puVar3 + 2;
      if (param_5 < puVar6) goto LAB_007c9995;
      if (((ushort)(*puVar3 << 8 | *puVar3 >> 8) == param_2) &&
         ((ushort)(puVar3[1] << 8 | puVar3[1] >> 8) == param_3)) {
        uVar4 = FUN_007c8770(local_448,param_1);
        if ((int)uVar4 == 1) goto LAB_007c999a;
      }
    } while (uVar5 != 0);
  }
  uVar4 = 0;
LAB_007c999a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

