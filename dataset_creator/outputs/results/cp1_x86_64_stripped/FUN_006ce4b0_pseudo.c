
uint * FUN_006ce4b0(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong local_48;
  ulong local_40 [2];
  
  uVar5 = *(ushort *)(param_1 + 0x20) >> 3;
  bVar4 = (byte)uVar5;
  if (bVar4 == 0xff) {
    uVar9 = 0;
    uVar6 = 0xff;
  }
  else {
    uVar6 = (uint)bVar4;
    bVar4 = bVar4 & 0x70;
    if (bVar4 == 0x20) {
      uVar9 = *(undefined8 *)(param_1 + 8);
    }
    else {
      if (bVar4 < 0x21) {
        if ((uVar5 & 0x60) != 0) {
code_r0x004046e0:
                    /* WARNING: Subroutine does not return */
          FUN_00404713();
        }
      }
      else {
        if (bVar4 == 0x30) {
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          goto LAB_006ce500;
        }
        if (bVar4 != 0x50) {
          puVar8 = (uint *)FUN_004046e0();
          return puVar8;
        }
      }
      uVar9 = 0;
    }
  }
LAB_006ce500:
  uVar1 = *param_2;
  lVar2 = 0;
  do {
    if (uVar1 == 0) {
      return (uint *)0x0;
    }
    lVar11 = lVar2;
    if (param_2[1] != 0) {
      if (((*(byte *)(param_1 + 0x20) & 4) == 0) ||
         (lVar11 = (long)param_2 + (4 - (long)(int)param_2[1]), lVar11 == lVar2)) {
joined_r0x006ce5be:
        lVar11 = lVar2;
        if (uVar6 != 0) {
          bVar4 = (byte)uVar6;
          uVar7 = FUN_006cdb90(uVar6 & 0xff,uVar9,param_2 + 2,&local_48);
          FUN_006cdb90(uVar6 & 0xf,0,uVar7,local_40);
          if (bVar4 == 0xff) {
            uVar10 = 0;
          }
          else {
LAB_006ce5ff:
            bVar4 = bVar4 & 7;
            if (bVar4 == 2) {
              uVar10 = 0xffff;
            }
            else {
              if (bVar4 < 3) {
                if (bVar4 != 0) {
                  puVar8 = (uint *)FUN_004046e0();
                  return puVar8;
                }
              }
              else {
                uVar10 = 0xffffffff;
                if (bVar4 == 3) goto LAB_006ce618;
                if (bVar4 != 4) {
                  puVar8 = (uint *)FUN_004046e0();
                  return puVar8;
                }
              }
              uVar10 = 0xffffffffffffffff;
            }
          }
LAB_006ce618:
          if (((local_48 & uVar10) != 0) && (param_3 - local_48 < local_40[0])) {
            return param_2;
          }
          goto LAB_006ce599;
        }
      }
      else {
        uVar6 = FUN_006cdce0(lVar11);
        bVar4 = (byte)uVar6;
        if (bVar4 == 0xff) {
          uVar9 = FUN_006cdb90(0xff,0,param_2 + 2,&local_48);
          FUN_006cdb90(uVar6 & 0xf,0,uVar9,local_40);
          uVar10 = 0;
          uVar9 = 0;
          goto LAB_006ce618;
        }
        bVar3 = bVar4 & 0x70;
        if (bVar3 != 0x20) {
          if (bVar3 < 0x21) {
            if ((uVar6 & 0x60) != 0) goto code_r0x004046e0;
          }
          else {
            if (bVar3 == 0x30) {
              uVar9 = *(undefined8 *)(param_1 + 0x10);
              goto joined_r0x006ce702;
            }
            if (bVar3 != 0x50) {
              puVar8 = (uint *)FUN_004046e0();
              return puVar8;
            }
          }
          uVar9 = 0;
          lVar2 = lVar11;
          goto joined_r0x006ce5be;
        }
        uVar9 = *(undefined8 *)(param_1 + 8);
joined_r0x006ce702:
        if (uVar6 != 0) {
          uVar7 = FUN_006cdb90(uVar6 & 0xff,uVar9,param_2 + 2,&local_48);
          FUN_006cdb90(uVar6 & 0xf,0,uVar7,local_40);
          goto LAB_006ce5ff;
        }
      }
      local_48 = *(ulong *)(param_2 + 2);
      local_40[0] = *(ulong *)(param_2 + 4);
      uVar6 = 0;
      if ((local_48 != 0) && (param_3 - local_48 < local_40[0])) {
        return param_2;
      }
    }
LAB_006ce599:
    param_2 = (uint *)((long)param_2 + (ulong)uVar1 + 4);
    uVar1 = *param_2;
    lVar2 = lVar11;
  } while( true );
}

