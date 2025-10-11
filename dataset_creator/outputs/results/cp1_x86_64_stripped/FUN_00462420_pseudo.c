
uint FUN_00462420(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  undefined8 uVar15;
  char *pcVar16;
  long in_FS_OFFSET;
  bool bVar17;
  uint local_70;
  char *local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uVar10 = FUN_0042c5c0(param_2);
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_0051f420();
    uVar3 = 0;
    lVar13 = 0;
    lVar12 = 0;
    lVar11 = 0;
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x290,"rsa_to_text")
    ;
    FUN_0051f8f0(0x39,0xc0102,0);
  }
  else {
    lVar11 = FUN_00436410();
    lVar12 = FUN_00436410();
    lVar13 = FUN_00436410();
    if ((lVar11 == 0 || lVar12 == 0) || (lVar13 == 0)) {
      FUN_0051f420();
      uVar3 = 0;
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x299,
                   "rsa_to_text");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else {
      local_70 = param_3 & 1;
      if ((param_3 & 1) == 0) {
        bVar17 = (param_3 & 2) == 0;
        local_68 = "Exponent:";
        if (bVar17) {
          local_68 = (char *)0x0;
        }
        pcVar16 = "Modulus:";
        if (bVar17) {
          pcVar16 = (char *)0x0;
        }
        pcVar14 = "RSA key";
        if (!bVar17) {
          pcVar14 = "Public-Key";
        }
        FUN_0042c390(param_2,&local_50,&local_48,&local_58);
        FUN_0042c920(param_2,lVar11,lVar12,lVar13);
        FUN_00436480(lVar11);
        uVar1 = FUN_004b7bb0(local_50);
        uVar3 = 0;
        iVar2 = FUN_004ae9e0(param_1,"%s: (%d bit)\n",pcVar14,uVar1);
        if (iVar2 < 1) goto LAB_00462580;
      }
      else {
        FUN_0042c390(param_2,&local_50,&local_48,&local_58);
        FUN_0042c920(param_2,lVar11,lVar12,lVar13);
        uVar1 = FUN_00436480(lVar11);
        uVar4 = FUN_004b7bb0(local_50);
        uVar3 = 0;
        iVar2 = FUN_004ae9e0(param_1,"%s: (%d bit, %d primes)\n","Private-Key",uVar4,uVar1);
        if (iVar2 < 1) goto LAB_00462580;
        pcVar16 = "modulus:";
        local_68 = "publicExponent:";
      }
      uVar3 = FUN_00461e70(param_1,pcVar16,local_50);
      if ((uVar3 != 0) && (uVar3 = FUN_00461e70(param_1,local_68,local_48), uVar3 != 0)) {
        if (local_70 == 0) {
LAB_004626e4:
          if ((param_3 & 0x80) != 0) {
            iVar2 = FUN_0042c5e0(param_2,0xf000);
            if (iVar2 == 0) {
              uVar3 = 1;
              iVar2 = FUN_00433230(uVar10);
              if (iVar2 == 0) {
                iVar2 = FUN_004ae9e0(param_1,"(INVALID PSS PARAMETERS)\n");
                uVar3 = (uint)(0 < iVar2);
              }
              goto LAB_00462580;
            }
            if (iVar2 == 0x1000) {
              iVar2 = FUN_00433230(uVar10);
              if (iVar2 == 0) {
                iVar2 = FUN_00433340(uVar10);
                iVar5 = FUN_00433360(uVar10);
                iVar6 = FUN_00433380(uVar10);
                iVar7 = FUN_004333a0(uVar10);
                iVar8 = FUN_004333c0(uVar10);
                iVar9 = FUN_004ae9e0(param_1,"PSS parameter restrictions:\n");
                uVar3 = 0;
                if (0 < iVar9) {
                  pcVar16 = "";
                  if (iVar2 == 0x40) {
                    pcVar16 = " (default)";
                  }
                  uVar10 = FUN_00433790(iVar2);
                  iVar2 = FUN_004ae9e0(param_1,"  Hash Algorithm: %s%s\n",uVar10,pcVar16);
                  if (0 < iVar2) {
                    if ((iVar5 != 0x38f) || (pcVar16 = " (default)", iVar6 != 0x40)) {
                      pcVar16 = "";
                    }
                    uVar10 = FUN_00433790(iVar6);
                    uVar15 = FUN_004337e0(iVar5);
                    iVar2 = FUN_004ae9e0(param_1,"  Mask Algorithm: %s with %s%s\n",uVar15,uVar10,
                                         pcVar16);
                    if (0 < iVar2) {
                      pcVar16 = "";
                      if (iVar7 == 0x14) {
                        pcVar16 = " (default)";
                      }
                      iVar2 = FUN_004ae9e0(param_1,"  Minimum Salt Length: %d%s\n",iVar7,pcVar16);
                      if (0 < iVar2) {
                        pcVar16 = "";
                        if (iVar8 == 1) {
                          pcVar16 = " (default)";
                        }
                        iVar2 = FUN_004ae9e0(param_1,"  Trailer Field: 0x%x%s\n",iVar8,pcVar16);
                        uVar3 = (uint)(0 < iVar2);
                      }
                    }
                  }
                }
              }
              else {
                iVar2 = FUN_004ae9e0(param_1,"No PSS parameter restrictions\n");
                uVar3 = (uint)(0 < iVar2);
              }
              goto LAB_00462580;
            }
          }
          uVar3 = 1;
        }
        else {
          uVar3 = FUN_00461e70(param_1,"privateExponent:",local_58);
          if (uVar3 != 0) {
            uVar15 = FUN_004364a0(lVar11,0);
            uVar3 = FUN_00461e70(param_1,"prime1:",uVar15);
            if (uVar3 != 0) {
              uVar15 = FUN_004364a0(lVar11,1);
              uVar3 = FUN_00461e70(param_1,"prime2:",uVar15);
              if (uVar3 != 0) {
                uVar15 = FUN_004364a0(lVar12,0);
                uVar3 = FUN_00461e70(param_1,"exponent1:",uVar15);
                if (uVar3 != 0) {
                  uVar15 = FUN_004364a0(lVar12,1);
                  uVar3 = FUN_00461e70(param_1,"exponent2:",uVar15);
                  if (uVar3 != 0) {
                    uVar15 = FUN_004364a0(lVar13,0);
                    uVar3 = FUN_00461e70(param_1,"coefficient:",uVar15);
                    if (uVar3 != 0) {
                      iVar2 = 2;
                      do {
                        iVar5 = FUN_00436480(lVar11);
                        if (iVar5 <= iVar2) goto LAB_004626e4;
                        iVar5 = iVar2 + 1;
                        iVar6 = FUN_004ae9e0(param_1,"prime%d:",iVar5);
                        if (iVar6 < 1) {
LAB_00462ace:
                          uVar3 = 0;
                          break;
                        }
                        uVar15 = FUN_004364a0(lVar11,iVar2);
                        uVar3 = FUN_00461e70(param_1,0,uVar15);
                        if (uVar3 == 0) break;
                        iVar6 = FUN_004ae9e0(param_1,"exponent%d:",iVar5);
                        if (iVar6 < 1) goto LAB_00462ace;
                        uVar15 = FUN_004364a0(lVar12,iVar2);
                        uVar3 = FUN_00461e70(param_1,0,uVar15);
                        if (uVar3 == 0) break;
                        iVar6 = FUN_004ae9e0(param_1,"coefficient%d:",iVar5);
                        if (iVar6 < 1) goto LAB_00462ace;
                        uVar15 = FUN_004364a0(lVar13,iVar2 + -1);
                        uVar3 = FUN_00461e70(param_1,0,uVar15);
                        iVar2 = iVar5;
                      } while (uVar3 != 0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00462580:
  FUN_004360b0(lVar11);
  FUN_004360b0(lVar12);
  FUN_004360b0(lVar13);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

