
uint * FUN_0061f130(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  uint *puVar8;
  long in_FS_OFFSET;
  byte *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 - 1 < 0xffff) {
    puVar3 = (uint *)FUN_006202a0();
    if (puVar3 != (uint *)0x0) {
      local_48 = (byte *)*param_2;
      bVar1 = *local_48;
      *puVar3 = (uint)bVar1;
      if (bVar1 == 0) {
        if (param_3 < 0x2b) {
          FUN_0051f420();
          uVar6 = 99;
        }
        else {
          local_48 = local_48 + 1;
          lVar4 = FUN_0041c320(local_48,0x20,"../crypto/ct/ct_oct.c",0x68);
          *(long *)(puVar3 + 6) = lVar4;
          if (lVar4 == 0) goto LAB_0061f323;
          puVar3[8] = 0x20;
          puVar3[9] = 0;
          bVar1 = local_48[0x20];
          pbVar7 = local_48 + 0x2a;
          *(ulong *)(puVar3 + 10) = (ulong)bVar1 << 0x38;
          uVar5 = (ulong)local_48[0x21] << 0x30 | (ulong)bVar1 << 0x38;
          *(ulong *)(puVar3 + 10) = uVar5;
          uVar5 = (ulong)local_48[0x22] << 0x28 | uVar5;
          *(ulong *)(puVar3 + 10) = uVar5;
          uVar5 = (ulong)local_48[0x23] << 0x20 | uVar5;
          *(ulong *)(puVar3 + 10) = uVar5;
          uVar5 = (ulong)local_48[0x24] << 0x18 | uVar5;
          *(ulong *)(puVar3 + 10) = uVar5;
          uVar5 = (ulong)local_48[0x25] << 0x10 | uVar5;
          *(ulong *)(puVar3 + 10) = uVar5;
          uVar5 = (ulong)local_48[0x26] << 8 | uVar5;
          *(ulong *)(puVar3 + 10) = uVar5;
          *(ulong *)(puVar3 + 10) = uVar5 | local_48[0x27];
          uVar5 = (ulong)(ushort)(*(ushort *)(local_48 + 0x28) << 8 |
                                 *(ushort *)(local_48 + 0x28) >> 8);
          local_48 = pbVar7;
          if (param_3 - 0x2b < uVar5) {
            FUN_0051f420();
            uVar6 = 0x72;
          }
          else {
            if (uVar5 != 0) {
              lVar4 = FUN_0041c320(pbVar7,uVar5,"../crypto/ct/ct_oct.c",0x76);
              *(long *)(puVar3 + 0xc) = lVar4;
              if (lVar4 == 0) goto LAB_0061f323;
            }
            *(ulong *)(puVar3 + 0xe) = uVar5;
            local_48 = local_48 + uVar5;
            lVar4 = (param_3 - 0x2b) - uVar5;
            iVar2 = FUN_0061efd0(puVar3,&local_48,lVar4);
            if (0 < iVar2) {
              pbVar7 = local_48 + (lVar4 - iVar2);
              goto LAB_0061f2ac;
            }
            FUN_0051f420();
            uVar6 = 0x80;
          }
        }
        FUN_0051f540("../crypto/ct/ct_oct.c",uVar6,"o2i_SCT");
        FUN_0051f8f0(0x32,0x68,0);
        puVar8 = (uint *)0x0;
        FUN_00620220(puVar3);
        goto LAB_0061f2c2;
      }
      lVar4 = FUN_0041c320(local_48,param_3,"../crypto/ct/ct_oct.c",0x87);
      *(long *)(puVar3 + 2) = lVar4;
      if (lVar4 != 0) {
        *(ulong *)(puVar3 + 4) = param_3;
        pbVar7 = local_48 + param_3;
LAB_0061f2ac:
        *param_2 = pbVar7;
        puVar8 = puVar3;
        if (param_1 != (undefined8 *)0x0) {
          FUN_00620220(*param_1);
          *param_1 = puVar3;
        }
        goto LAB_0061f2c2;
      }
    }
  }
  else {
    FUN_0051f420();
    puVar3 = (uint *)0x0;
    FUN_0051f540("../crypto/ct/ct_oct.c",0x4c,"o2i_SCT");
    FUN_0051f8f0(0x32,0x68,0);
  }
LAB_0061f323:
  puVar8 = (uint *)0x0;
  FUN_00620220(puVar3);
LAB_0061f2c2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return puVar8;
}

