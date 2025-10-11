
bool FUN_00598ec0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined1 local_69;
  uint local_64;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((uint)param_3 & 0xf0000) == 0x40000) {
    local_69 = 10;
    local_64 = 0;
    bVar2 = 0xc;
  }
  else {
    local_69 = 0x20;
    local_64 = (uint)(param_3 == 0);
    bVar2 = -(param_3 == 0) & 0x10;
  }
  if (((param_4 & 1) != 0) ||
     ((iVar3 = FUN_004ab7e0(param_1,"Certificate:\n",0xd), 0 < iVar3 &&
      (iVar3 = FUN_004ab7e0(param_1,"    Data:\n",10), 0 < iVar3)))) {
    if ((param_4 & 2) == 0) {
      uVar9 = FUN_005a1b40(param_2);
      if (uVar9 < 3) {
        iVar3 = FUN_004ae9e0(param_1,"%8sVersion: %ld (0x%lx)\n",&DAT_0083e5c2,uVar9 + 1,uVar9);
      }
      else {
        iVar3 = FUN_004ae9e0(param_1,"%8sVersion: Unknown (%ld)\n",&DAT_0083e5c2,uVar9,uVar9);
      }
      if (iVar3 < 1) goto LAB_00599080;
    }
    uVar9 = (ulong)((uint)param_4 & 4);
    if ((param_4 & 4) == 0) {
      piVar4 = (int *)FUN_0059e6f0(param_2);
      iVar3 = FUN_004ab7e0(param_1,"        Serial Number:",0x16);
      if (0 < iVar3) {
        if (*piVar4 < 9) {
          FUN_0051f000();
          lVar5 = FUN_0049fa00(piVar4);
          FUN_0051f050();
          if (lVar5 != -1) {
            puVar8 = &DAT_0083e5c2;
            if (piVar4[1] == 0x102) {
              lVar5 = -lVar5;
              puVar8 = &DAT_0080b56c;
            }
            iVar3 = FUN_004ae9e0(param_1," %s%lu (%s0x%lx)\n",puVar8,lVar5,puVar8,lVar5);
            if (0 < iVar3) goto LAB_00598f36;
            goto LAB_00599080;
          }
        }
        pcVar7 = " (Negative)";
        if (piVar4[1] != 0x102) {
          pcVar7 = "";
        }
        iVar3 = FUN_004ae9e0(param_1,"\n%12s%s",&DAT_0083e5c2,pcVar7);
        while (0 < iVar3) {
          if (*piVar4 <= (int)uVar9) goto LAB_00598f36;
          uVar6 = 0x3a;
          if (*piVar4 == (int)uVar9 + 1) {
            uVar6 = 10;
          }
          puVar1 = (undefined1 *)(*(long *)(piVar4 + 2) + uVar9);
          uVar9 = uVar9 + 1;
          iVar3 = FUN_004ae9e0(param_1,"%02x%c",*puVar1,uVar6);
        }
      }
    }
    else {
LAB_00598f36:
      if ((param_4 & 8) == 0) {
        uVar6 = FUN_005a1bf0(param_2);
        iVar3 = FUN_004ab870(param_1,&DAT_0081d1a6);
        if ((iVar3 < 1) || (iVar3 = FUN_00598a40(param_1,uVar6,0), iVar3 < 1)) goto LAB_00599080;
      }
      if ((param_4 & 0x10) == 0) {
        iVar3 = FUN_004ae9e0(param_1,"        Issuer:%c",local_69);
        if (0 < iVar3) {
          uVar6 = FUN_0059e6c0(param_2);
          iVar3 = FUN_005b7150(param_1,uVar6,bVar2,param_3);
          if (((int)local_64 <= iVar3) && (iVar3 = FUN_004ab7e0(param_1,&DAT_008243ea,1), 0 < iVar3)
             ) goto LAB_00598f48;
        }
      }
      else {
LAB_00598f48:
        if ((param_4 & 0x20) == 0) {
          iVar3 = FUN_004ab7e0(param_1,"        Validity\n",0x11);
          if ((0 < iVar3) &&
             (iVar3 = FUN_004ab7e0(param_1,"            Not Before: ",0x18), 0 < iVar3)) {
            uVar6 = FUN_005a1b50(param_2);
            iVar3 = FUN_005b8050(param_1,uVar6,0);
            if ((iVar3 != 0) &&
               (iVar3 = FUN_004ab7e0(param_1,"\n            Not After : ",0x19), 0 < iVar3)) {
              uVar6 = FUN_005a1b60(param_2);
              iVar3 = FUN_005b8050(param_1,uVar6,0);
              if ((iVar3 != 0) && (iVar3 = FUN_004ab7e0(param_1,&DAT_008243ea,1), 0 < iVar3))
              goto LAB_00598f51;
            }
          }
        }
        else {
LAB_00598f51:
          if ((param_4 & 0x40) == 0) {
            iVar3 = FUN_004ae9e0(param_1,"        Subject:%c",local_69);
            if (0 < iVar3) {
              uVar6 = FUN_0059e6d0(param_2);
              iVar3 = FUN_005b7150(param_1,uVar6,bVar2,param_3);
              if (((int)local_64 <= iVar3) &&
                 (iVar3 = FUN_004ab7e0(param_1,&DAT_008243ea,1), 0 < iVar3)) goto LAB_00598f5a;
            }
          }
          else {
LAB_00598f5a:
            if ((param_4 & 0x80) == 0) {
              uVar6 = FUN_005a1bb0(param_2);
              FUN_005afa30(&local_48,0,0,0,uVar6);
              iVar3 = FUN_004ab7e0(param_1,"        Subject Public Key Info:\n",0x21);
              if ((((iVar3 < 1) ||
                   (iVar3 = FUN_004ae9e0(param_1,"%12sPublic Key Algorithm: ",&DAT_0083e5c2),
                   iVar3 < 1)) || (iVar3 = FUN_004a0450(param_1,local_48), iVar3 < 1)) ||
                 (iVar3 = FUN_004ab870(param_1,&DAT_008243ea), iVar3 < 1)) goto LAB_00599080;
              lVar5 = FUN_0059ef80(param_2);
              if (lVar5 == 0) {
                FUN_004ae9e0(param_1,"%12sUnable to load Public Key\n",&DAT_0083e5c2);
                FUN_005fbe10(param_1);
              }
              else {
                FUN_0040e800(param_1,lVar5,0x10,0);
              }
            }
            if (((param_4 & 0x1000) != 0) ||
               (((FUN_005a1bd0(param_2,&local_50,&local_48), local_50 == 0 ||
                 ((iVar3 = FUN_004ae9e0(param_1,"%8sIssuer Unique ID: ",&DAT_0083e5c2), 0 < iVar3 &&
                  (iVar3 = FUN_00598950(param_1,local_50,0xc), iVar3 != 0)))) &&
                ((local_48 == 0 ||
                 ((iVar3 = FUN_004ae9e0(param_1,"%8sSubject Unique ID: ",&DAT_0083e5c2), 0 < iVar3
                  && (iVar3 = FUN_00598950(param_1,local_48,0xc), iVar3 != 0)))))))) {
              if ((param_4 & 0x100) == 0) {
                uVar6 = FUN_005a1bc0(param_2);
                iVar3 = FUN_0059a030(param_1,"X509v3 extensions",uVar6,param_4,8);
                if (iVar3 == 0) goto LAB_00599080;
              }
              if ((param_4 & 0x200) == 0) {
                FUN_005b0850(&local_48,&local_50,param_2);
                iVar3 = FUN_00598a40(param_1,local_50,local_48);
                if (iVar3 < 1) goto LAB_00599080;
              }
              bVar10 = true;
              if ((param_4 & 0x400) == 0) {
                iVar3 = FUN_00598ba0(param_1,param_2,0);
                bVar10 = iVar3 != 0;
              }
              goto LAB_00599083;
            }
          }
        }
      }
    }
  }
LAB_00599080:
  bVar10 = false;
LAB_00599083:
  FUN_0041ad60(0,"../crypto/x509/t_x509.c",0xdc);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

