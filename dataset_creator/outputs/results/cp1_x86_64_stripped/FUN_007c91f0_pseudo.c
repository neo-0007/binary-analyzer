
undefined8 FUN_007c91f0(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort *puVar5;
  long in_FS_OFFSET;
  int local_44c;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0xffffffff;
  if ((0xb < param_2 - param_1) && (0xb < param_4 - param_3)) {
    if (((*(byte *)(param_1 + 2) & 0x78) != 0x28) || ((*(byte *)(param_3 + 2) & 0x78) != 0x28)) {
      uVar4 = *(ushort *)(param_1 + 4);
      uVar2 = 0;
      if (uVar4 != *(ushort *)(param_3 + 4)) goto LAB_007c9300;
      uVar4 = uVar4 << 8 | uVar4 >> 8;
      puVar5 = (ushort *)(param_1 + 0xc);
      local_44c = uVar4 - 1;
      if (uVar4 != 0) {
        do {
          iVar1 = FUN_007c8450(param_1,param_2,puVar5,local_448,0x402);
          if ((iVar1 < 0) ||
             (puVar3 = (ushort *)((long)iVar1 + (long)puVar5), param_2 - (long)puVar3 < 4)) {
            uVar2 = 0xffffffff;
            goto LAB_007c9300;
          }
          puVar5 = puVar3 + 2;
          uVar2 = FUN_007c98d0(local_448,*puVar3 << 8 | *puVar3 >> 8,puVar3[1] << 8 | puVar3[1] >> 8
                               ,param_3,param_4);
          if ((int)uVar2 == 0) goto LAB_007c9300;
          local_44c = local_44c + -1;
        } while (local_44c != -1);
      }
    }
    uVar2 = 1;
  }
LAB_007c9300:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

