
undefined8 i2r_IPAddrBlocks(undefined8 param_1,undefined8 param_2,BIO *param_3,uint param_4)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar3 = OPENSSL_sk_num(param_2);
  if (0 < iVar3) {
    do {
      puVar5 = (undefined8 *)OPENSSL_sk_value(param_2,iVar8);
      uVar4 = X509v3_addr_get_afi(puVar5);
      if (uVar4 == 1) {
        BIO_printf(param_3,"%*sIPv4",(ulong)param_4,&DAT_008343a2);
      }
      else if (uVar4 == 2) {
        BIO_printf(param_3,"%*sIPv6",(ulong)param_4,&DAT_008343a2);
      }
      else {
        BIO_printf(param_3,"%*sUnknown AFI %u",(ulong)param_4,&DAT_008343a2,(ulong)uVar4);
      }
      if (*(int *)*puVar5 < 3) {
LAB_00605378:
        iVar3 = *(int *)puVar5[1];
        if (iVar3 != 0) goto LAB_00605386;
LAB_006054f0:
        BIO_puts(param_3,": inherit\n");
      }
      else {
        bVar1 = *(byte *)(*(long *)((int *)*puVar5 + 2) + 2);
        if (bVar1 == 0x40) {
          BIO_puts(param_3," (Tunnel)");
          goto LAB_00605378;
        }
        if (0x40 < bVar1) {
          if (bVar1 == 0x42) {
            BIO_puts(param_3," (BGP MDT)");
          }
          else if (bVar1 == 0x80) {
            BIO_puts(param_3," (MPLS-labeled VPN)");
          }
          else {
            if (bVar1 != 0x41) goto LAB_006055f8;
            BIO_puts(param_3," (VPLS)");
          }
          goto LAB_00605378;
        }
        if (bVar1 == 3) {
          BIO_puts(param_3," (Unicast/Multicast)");
          goto LAB_00605378;
        }
        if (bVar1 < 4) {
          if (bVar1 == 1) {
            BIO_puts(param_3," (Unicast)");
          }
          else {
            if (bVar1 != 2) goto LAB_006055f8;
            BIO_puts(param_3," (Multicast)");
          }
          goto LAB_00605378;
        }
        if (bVar1 != 4) {
LAB_006055f8:
          BIO_printf(param_3," (Unknown SAFI %u)");
          goto LAB_00605378;
        }
        BIO_puts(param_3," (MPLS)");
        iVar3 = *(int *)puVar5[1];
        if (iVar3 == 0) goto LAB_006054f0;
LAB_00605386:
        if (iVar3 == 1) {
          BIO_puts(param_3,":\n");
          iVar7 = 0;
          uVar2 = *(undefined8 *)(puVar5[1] + 8);
          iVar3 = OPENSSL_sk_num(uVar2);
          if (0 < iVar3) {
            do {
              piVar6 = (int *)OPENSSL_sk_value(uVar2,iVar7);
              BIO_printf(param_3,"%*s",(ulong)(param_4 + 2),&DAT_008343a2);
              if (*piVar6 == 0) {
                iVar3 = i2r_address(param_3,uVar4,0,*(undefined8 *)(piVar6 + 2));
                if (iVar3 == 0) {
                  return 0;
                }
                BIO_printf(param_3,"/%d\n",
                           (ulong)(**(int **)(piVar6 + 2) * 8 -
                                  ((uint)*(undefined8 *)(*(int **)(piVar6 + 2) + 4) & 7)));
              }
              else if (*piVar6 == 1) {
                iVar3 = i2r_address(param_3,uVar4,0,**(undefined8 **)(piVar6 + 2));
                if (iVar3 == 0) {
                  return 0;
                }
                BIO_puts(param_3,"-");
                iVar3 = i2r_address(param_3,uVar4,0xff,*(undefined8 *)(*(long *)(piVar6 + 2) + 8));
                if (iVar3 == 0) {
                  return 0;
                }
                BIO_puts(param_3,"\n");
              }
              iVar7 = iVar7 + 1;
              iVar3 = OPENSSL_sk_num(uVar2);
            } while (iVar7 < iVar3);
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar3 = OPENSSL_sk_num(param_2);
    } while (iVar8 < iVar3);
  }
  return 1;
}

