
undefined8 CRYPTO_ocb128_setiv(undefined8 *param_1,void *param_2,size_t param_3,long param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte bVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulong local_50;
  byte local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined4 local_3f;
  undefined2 local_3b;
  byte local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28 [8];
  long local_20 [2];
  
  local_20[0] = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0xffffffff;
  if ((param_3 - 1 < 0xf) && (param_4 - 1U < 0x10)) {
    local_3b = 0;
    *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x14) = (undefined1  [16])0x0;
    local_48 = (byte)((int)param_4 << 4);
    uStack_47 = 0;
    uStack_40 = 0;
    local_3f = 0;
    local_39 = 0;
    memcpy((void *)((long)&local_38 - param_3),param_2,param_3);
    (&local_39)[-param_3] = (&local_39)[-param_3] | 1;
    local_58 = CONCAT71(uStack_47,local_48);
    local_50 = CONCAT17(local_39,CONCAT25(local_3b,CONCAT41(local_3f,uStack_40))) &
               0xc0ffffffffffffff;
    (*(code *)*param_1)(&local_58,&local_68,param_1[2]);
    local_38 = local_68;
    uStack_30 = uStack_60;
    pbVar5 = local_28;
    pbVar2 = (byte *)&local_68;
    do {
      pbVar6 = pbVar5 + 1;
      *pbVar5 = *pbVar2 ^ pbVar2[1];
      pbVar5 = pbVar6;
      pbVar2 = pbVar2 + 1;
    } while ((byte *)local_20 != pbVar6);
    lVar4 = 0xf;
    bVar8 = 8 - (local_39 & 7);
    uVar9 = (ulong)((local_39 & 0x3f) >> 3);
    iVar7 = 0;
    do {
      bVar1 = *(byte *)((long)&local_38 + lVar4 + uVar9);
      *(byte *)((long)param_1 + lVar4 + 0x90) = (byte)iVar7 | bVar1 << (local_39 & 7);
      bVar10 = lVar4 != 0;
      lVar4 = lVar4 + -1;
      iVar7 = (int)(uint)bVar1 >> (bVar8 & 0x1f);
    } while (bVar10);
    *(byte *)((long)param_1 + 0x9f) =
         *(byte *)((long)param_1 + 0x9f) |
         (byte)((int)(uint)((byte)(0xff << (bVar8 & 0x1f)) & local_28[uVar9]) >> (bVar8 & 0x1f));
    uVar3 = 1;
  }
  if (local_20[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

