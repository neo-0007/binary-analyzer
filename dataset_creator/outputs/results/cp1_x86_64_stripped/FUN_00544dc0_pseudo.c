
bool FUN_00544dc0(long *param_1,long param_2,uint param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  uint local_16c;
  byte local_168 [144];
  byte local_d8 [152];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *param_1;
  if (param_4 == 0) {
    if (lVar5 != 0) goto LAB_00544e0d;
  }
  else if ((lVar5 == param_4) || ((param_2 != 0 && (-1 < (int)param_3)))) {
    *param_1 = param_4;
    lVar5 = param_4;
LAB_00544e0d:
    uVar1 = FUN_0040ac60(lVar5);
    uVar4 = (ulong)(uVar1 & 2);
    if ((uVar1 & 2) == 0) {
      if (param_2 == 0) {
        iVar2 = FUN_004074f0(param_1[1],param_1[2]);
        bVar6 = iVar2 != 0;
        goto LAB_00544e37;
      }
      uVar1 = FUN_0040abc0(lVar5);
      if (uVar1 < 0x91) {
        if ((int)uVar1 < (int)param_3) {
          iVar2 = FUN_00407430(param_1[1],lVar5,param_5);
          if (((iVar2 != 0) &&
              (iVar2 = FUN_00405f60(param_1[1],param_2,(long)(int)param_3), iVar2 != 0)) &&
             (iVar2 = FUN_00406090(param_1[1],local_d8,&local_16c), iVar2 != 0)) goto LAB_00544ea9;
        }
        else if (param_3 < 0x91) {
          FUN_00771fb0(local_d8,param_2,(long)(int)param_3,0x90);
          local_16c = param_3;
LAB_00544ea9:
          if (local_16c != 0x90) {
            thunk_FUN_00713720(local_d8 + local_16c,0,0x90 - local_16c);
          }
          lVar3 = 0;
          do {
            local_168[lVar3] = local_d8[lVar3] ^ 0x36;
            lVar3 = lVar3 + 1;
          } while (lVar3 != 0x90);
          iVar2 = FUN_00407430(param_1[2],lVar5,param_5);
          if (iVar2 == 0) {
LAB_00544eef:
            bVar6 = false;
          }
          else {
            iVar2 = FUN_0040abc0(lVar5);
            iVar2 = FUN_00405f60(param_1[2],local_168,(long)iVar2);
            if (iVar2 == 0) goto LAB_00544eef;
            do {
              local_168[uVar4] = local_d8[uVar4] ^ 0x5c;
              uVar4 = uVar4 + 1;
            } while (uVar4 != 0x90);
            iVar2 = FUN_00407430(param_1[3],lVar5,param_5);
            if (iVar2 == 0) goto LAB_00544eef;
            iVar2 = FUN_0040abc0(lVar5);
            iVar2 = FUN_00405f60(param_1[3],local_168,(long)iVar2);
            if (iVar2 == 0) goto LAB_00544eef;
            iVar2 = FUN_004074f0(param_1[1],param_1[2]);
            bVar6 = iVar2 != 0;
          }
          FUN_004227b0(local_d8,0x90);
          FUN_004227b0(local_168,0x90);
          goto LAB_00544e37;
        }
      }
    }
  }
  bVar6 = false;
LAB_00544e37:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar6;
}

