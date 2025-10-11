
undefined8 FUN_0047a5c0(long param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  byte bVar9;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  byte local_49;
  byte abStack_46 [2];
  uint local_44;
  long local_40;
  
  uVar3 = *(uint *)(param_1 + 0xc0);
  lVar4 = *(long *)(param_1 + 0xf8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_49 = (byte)uVar3;
  local_44 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  if (*(long *)(lVar4 + 0x18) != 0) {
    lVar10 = lVar4;
    if ((param_4 != 0) && (param_5 != 0)) {
      iVar6 = FUN_0047a0a0(param_1,2,param_4,param_5);
      if (iVar6 == 0) goto LAB_0047a62d;
      lVar10 = *(long *)(param_1 + 0xf8);
    }
    if (param_3 != 0) {
      lVar1 = lVar10 + 0x106;
      thunk_FUN_00713a50(lVar1,lVar10 + 0x28,*(undefined8 *)(param_1 + 0xe8));
      do {
        uVar8 = FUN_0043c7e0(lVar10);
        iVar6 = FUN_00407430(*(undefined8 *)(lVar10 + 0x18),uVar8,0);
        if ((iVar6 == 0) ||
           (iVar6 = FUN_00405f60(*(undefined8 *)(lVar10 + 0x18),lVar1,
                                 *(undefined8 *)(param_1 + 0xe8)), iVar6 == 0)) goto LAB_0047a62d;
        if (param_3 < *(ulong *)(lVar10 + 0x20)) {
          iVar6 = FUN_00406ca0(*(undefined8 *)(lVar10 + 0x18),lVar1,0);
          if (iVar6 != 0) {
            thunk_FUN_00713a50(param_2,lVar1,param_3);
            break;
          }
          goto LAB_0047a62d;
        }
        iVar6 = FUN_00406ca0(*(undefined8 *)(lVar10 + 0x18),param_2,0);
        if (iVar6 == 0) goto LAB_0047a62d;
        param_3 = param_3 - *(long *)(lVar10 + 0x20);
        if (param_3 == 0) break;
        param_2 = param_2 + *(long *)(lVar10 + 0x20);
        pbVar2 = (byte *)(lVar10 + 0x105 + *(long *)(param_1 + 0xe8));
        bVar9 = *pbVar2;
        *pbVar2 = bVar9 + 1;
        if ((bVar9 + 1 >> 8 != 0) && (lVar5 = *(long *)(param_1 + 0xe8), lVar5 != 1)) {
          pbVar11 = pbVar2 + -1;
          do {
            *pbVar11 = *pbVar11 + 1;
            if (*pbVar11 != 0) break;
            pbVar11 = pbVar11 + -1;
          } while (pbVar11 + (lVar5 - (long)pbVar2) != (byte *)0x0);
        }
      } while( true );
    }
    iVar6 = FUN_0047a0a0(param_1,3,0,0);
    if ((iVar6 != 0) && (iVar6 = FUN_00479c40(param_1,lVar4 + 0x28,lVar4 + 0x97), iVar6 != 0)) {
      bVar9 = 0;
      lVar4 = lVar4 + 0x27 + *(long *)(param_1 + 0xe8);
      lVar10 = 4;
      while( true ) {
        iVar6 = (uint)*(byte *)(lVar4 + -4 + lVar10) + (uint)local_49 + (uint)bVar9;
        *(char *)(lVar4 + -4 + lVar10) = (char)iVar6;
        bVar9 = (byte)((uint)iVar6 >> 8);
        if (lVar10 + -1 == 0) break;
        local_49 = abStack_46[lVar10];
        lVar10 = lVar10 + -1;
      }
      pcVar7 = (char *)(lVar4 + -4);
      if ((bVar9 != 0) && (lVar10 = *(long *)(param_1 + 0xe8), lVar10 != 4)) {
        do {
          *pcVar7 = *pcVar7 + '\x01';
          if (*pcVar7 != '\0') break;
          pcVar7 = pcVar7 + -1;
        } while (pcVar7 + (lVar10 - lVar4) != (char *)0x0);
      }
      uVar8 = 1;
      goto LAB_0047a62f;
    }
  }
LAB_0047a62d:
  uVar8 = 0;
LAB_0047a62f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar8;
}

