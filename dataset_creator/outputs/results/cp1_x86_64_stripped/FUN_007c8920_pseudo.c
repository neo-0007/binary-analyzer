
int FUN_007c8920(long *param_1,uint param_2,undefined8 param_3,uint param_4,uint param_5,
                long param_6,ushort *param_7,int param_8)

{
  ulong uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  ushort uVar8;
  long in_FS_OFFSET;
  uint local_f8 [2];
  uint local_f0;
  ushort *local_e8;
  undefined8 local_e0;
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_4 | param_5) < 0x10000) && (param_7 != (ushort *)0x0)) && (0xb < param_8)) {
    param_7[0] = 0;
    param_7[1] = 0;
    param_7[2] = 0;
    param_7[3] = 0;
    uVar8 = (ushort)param_4;
    uVar2 = (ushort)param_5;
    param_7[4] = 0;
    param_7[5] = 0;
    FUN_00767f90(1,local_f8);
    *param_7 = (ushort)(local_f0 ^ local_f8[0]) ^ (ushort)((local_f0 ^ local_f8[0]) >> 8);
    *(byte *)(param_7 + 1) = (byte)param_7[1] & 0x87 | (byte)((param_2 & 0xf) << 3);
    uVar1 = *(ulong *)(*param_1 + 8);
    if ((uVar1 & 0x4000000) != 0) {
      *(byte *)((long)param_7 + 3) = *(byte *)((long)param_7 + 3) | 0x20;
    }
    local_e8 = param_7;
    local_e0 = 0;
    param_7[1] = (ushort)(uVar1 >> 6) & 1 | param_7[1] & 0xf0fe;
    if (param_2 == 0) {
      if (-1 < param_8 + -0x10) {
        iVar7 = FUN_007c9420(param_3,param_7 + 6,(long)(param_8 + -0x10),&local_e8,local_48);
        if (-1 < iVar7) {
          puVar5 = (ushort *)((long)iVar7 + (long)(param_7 + 6));
          *puVar5 = uVar2 << 8 | uVar2 >> 8;
          puVar5[1] = uVar8 << 8 | uVar8 >> 8;
          param_7[2] = 0x100;
          iVar7 = ((int)puVar5 + 4) - (int)param_7;
          goto LAB_007c8aef;
        }
      }
    }
    else {
      iVar7 = -1;
      if (param_2 != 4) goto LAB_007c8aef;
      iVar7 = 4;
      if (param_6 != 0) {
        iVar7 = 0xe;
      }
      iVar7 = (param_8 + -0xc) - iVar7;
      if (-1 < iVar7) {
        iVar3 = FUN_007c9420(param_3,param_7 + 6,(long)iVar7,&local_e8);
        if (-1 < iVar3) {
          uVar8 = uVar8 << 8 | uVar8 >> 8;
          puVar6 = (ushort *)((long)iVar3 + (long)(param_7 + 6));
          *puVar6 = uVar2 << 8 | uVar2 >> 8;
          puVar5 = puVar6 + 2;
          puVar6[1] = uVar8;
          param_7[2] = 0x100;
          if (param_6 != 0) {
            iVar7 = FUN_007c9420(param_6,puVar5,(long)(iVar7 - iVar3),&local_e8,local_48);
            if (iVar7 < 0) goto LAB_007c8b90;
            puVar4 = (undefined2 *)((long)iVar7 + (long)puVar5);
            *puVar4 = 0xa00;
            puVar5 = puVar4 + 5;
            puVar4[1] = uVar8;
            *(undefined4 *)(puVar4 + 2) = 0;
            puVar4[4] = 0;
            param_7[5] = 0x100;
          }
          iVar7 = (int)puVar5 - (int)param_7;
          goto LAB_007c8aef;
        }
      }
    }
  }
LAB_007c8b90:
  iVar7 = -1;
LAB_007c8aef:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

