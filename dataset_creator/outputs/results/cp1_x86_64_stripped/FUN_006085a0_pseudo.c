
undefined8 FUN_006085a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar3 = FUN_00436480(param_2);
  if (0 < iVar3) {
    do {
      puVar5 = (undefined8 *)FUN_004364a0(param_2,iVar8);
      iVar3 = FUN_00608560(puVar5);
      if (iVar3 == 1) {
        FUN_004ae9e0(param_3,"%*sIPv4",param_4,&DAT_0083e5c2);
      }
      else if (iVar3 == 2) {
        FUN_004ae9e0(param_3,"%*sIPv6",param_4,&DAT_0083e5c2);
      }
      else {
        FUN_004ae9e0(param_3,"%*sUnknown AFI %u",param_4,&DAT_0083e5c2,iVar3);
      }
      if (*(int *)*puVar5 < 3) {
LAB_00608678:
        iVar4 = *(int *)puVar5[1];
        if (iVar4 != 0) goto LAB_00608686;
LAB_006087f0:
        FUN_004ab870(param_3,": inherit\n");
      }
      else {
        bVar1 = *(byte *)(*(long *)((int *)*puVar5 + 2) + 2);
        if (bVar1 == 0x40) {
          FUN_004ab870(param_3," (Tunnel)");
          goto LAB_00608678;
        }
        if (0x40 < bVar1) {
          if (bVar1 == 0x42) {
            FUN_004ab870(param_3," (BGP MDT)");
          }
          else if (bVar1 == 0x80) {
            FUN_004ab870(param_3," (MPLS-labeled VPN)");
          }
          else {
            if (bVar1 != 0x41) goto LAB_006088f8;
            FUN_004ab870(param_3," (VPLS)");
          }
          goto LAB_00608678;
        }
        if (bVar1 == 3) {
          FUN_004ab870(param_3," (Unicast/Multicast)");
          goto LAB_00608678;
        }
        if (bVar1 < 4) {
          if (bVar1 == 1) {
            FUN_004ab870(param_3," (Unicast)");
          }
          else {
            if (bVar1 != 2) goto LAB_006088f8;
            FUN_004ab870(param_3," (Multicast)");
          }
          goto LAB_00608678;
        }
        if (bVar1 != 4) {
LAB_006088f8:
          FUN_004ae9e0(param_3," (Unknown SAFI %u)");
          goto LAB_00608678;
        }
        FUN_004ab870(param_3," (MPLS)");
        iVar4 = *(int *)puVar5[1];
        if (iVar4 == 0) goto LAB_006087f0;
LAB_00608686:
        if (iVar4 == 1) {
          FUN_004ab870(param_3,":\n");
          iVar7 = 0;
          uVar2 = *(undefined8 *)(puVar5[1] + 8);
          iVar4 = FUN_00436480(uVar2);
          if (0 < iVar4) {
            do {
              piVar6 = (int *)FUN_004364a0(uVar2,iVar7);
              FUN_004ae9e0(param_3,"%*s",param_4 + 2,&DAT_0083e5c2);
              if (*piVar6 == 0) {
                iVar4 = FUN_006077f0(param_3,iVar3,0,*(undefined8 *)(piVar6 + 2));
                if (iVar4 == 0) {
                  return 0;
                }
                FUN_004ae9e0(param_3,&DAT_0081ae91,
                             **(int **)(piVar6 + 2) * 8 -
                             ((uint)*(undefined8 *)(*(int **)(piVar6 + 2) + 4) & 7));
              }
              else if (*piVar6 == 1) {
                iVar4 = FUN_006077f0(param_3,iVar3,0,**(undefined8 **)(piVar6 + 2));
                if (iVar4 == 0) {
                  return 0;
                }
                FUN_004ab870(param_3,&DAT_0080b56c);
                iVar4 = FUN_006077f0(param_3,iVar3,0xff,*(undefined8 *)(*(long *)(piVar6 + 2) + 8));
                if (iVar4 == 0) {
                  return 0;
                }
                FUN_004ab870(param_3,&DAT_008243ea);
              }
              iVar7 = iVar7 + 1;
              iVar4 = FUN_00436480(uVar2);
            } while (iVar7 < iVar4);
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar3 = FUN_00436480(param_2);
    } while (iVar8 < iVar3);
  }
  return 1;
}

