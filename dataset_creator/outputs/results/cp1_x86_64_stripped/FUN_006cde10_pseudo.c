
long FUN_006cde10(ulong *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long local_50;
  ulong local_40 [2];
  
  uVar2 = *param_2;
  if (uVar2 == 0) {
    local_50 = 0;
  }
  else {
    uVar8 = 0;
    uVar4 = 0;
    local_50 = 0;
    lVar5 = 0;
    do {
      lVar7 = lVar5;
      if (param_2[1] != 0) {
        lVar7 = (long)param_2 + (4 - (long)(int)param_2[1]);
        if (lVar7 != lVar5) {
          uVar4 = FUN_006cdce0(lVar7);
          if (uVar4 == 0xff) {
            return -1;
          }
          if ((byte)uVar4 == 0xff) {
LAB_006cdf58:
            uVar8 = 0;
          }
          else {
            bVar3 = (byte)uVar4 & 0x70;
            if (bVar3 != 0x20) {
              if (bVar3 < 0x21) {
                if ((uVar4 & 0x60) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00404713();
                }
              }
              else {
                if (bVar3 == 0x30) {
                  uVar8 = param_1[2];
                  goto LAB_006cdee8;
                }
                if (bVar3 != 0x50) {
                  lVar5 = FUN_004046cc();
                  return lVar5;
                }
              }
              goto LAB_006cdf58;
            }
            uVar8 = param_1[1];
          }
LAB_006cdee8:
          uVar1 = (ushort)param_1[4];
          if ((uVar1 & 0x7f8) == 0x7f8) {
            *(ushort *)(param_1 + 4) = uVar1 & 0xf807 | (ushort)((uVar4 & 0xff) << 3);
          }
          else if ((byte)(uVar1 >> 3) != uVar4) {
            *(byte *)(param_1 + 4) = (byte)param_1[4] | 4;
          }
        }
        FUN_006cdb90(uVar4 & 0xff,uVar8,param_2 + 2,local_40);
        if ((byte)uVar4 == 0xff) {
          uVar6 = 0;
        }
        else {
          bVar3 = (byte)uVar4 & 7;
          if (bVar3 == 2) {
            uVar6 = 0xffff;
          }
          else {
            if (bVar3 < 3) {
              if ((uVar4 & 7) != 0) {
                lVar5 = FUN_004046cc();
                return lVar5;
              }
            }
            else {
              uVar6 = 0xffffffff;
              if (bVar3 == 3) goto LAB_006cde5b;
              if (bVar3 != 4) {
                lVar5 = FUN_004046cc();
                return lVar5;
              }
            }
            uVar6 = 0xffffffffffffffff;
          }
        }
LAB_006cde5b:
        if (((local_40[0] & uVar6) != 0) && (local_50 = local_50 + 1, local_40[0] < *param_1)) {
          *param_1 = local_40[0];
        }
      }
      param_2 = (uint *)((long)param_2 + (ulong)uVar2 + 4);
      uVar2 = *param_2;
      lVar5 = lVar7;
    } while (uVar2 != 0);
  }
  return local_50;
}

