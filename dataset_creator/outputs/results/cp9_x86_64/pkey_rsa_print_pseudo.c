
bool pkey_rsa_print(BIO *param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *number;
  ulong uVar7;
  int local_44;
  
  uVar2 = 0;
  lVar1 = *(long *)(param_2 + 0x20);
  if (*(BIGNUM **)(lVar1 + 0x28) != (BIGNUM *)0x0) {
    uVar2 = BN_num_bits(*(BIGNUM **)(lVar1 + 0x28));
  }
  OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x88));
  iVar3 = BIO_indent(param_1,param_3,0x80);
  if (iVar3 != 0) {
    pcVar6 = "RSA-PSS";
    if (**(int **)(param_2 + 8) != 0x390) {
      pcVar6 = "RSA";
    }
    iVar3 = BIO_printf(param_1,"%s ",pcVar6);
    if (0 < iVar3) {
      if ((param_4 == 0) || (*(long *)(lVar1 + 0x38) == 0)) {
        iVar3 = BIO_printf(param_1,"Public-Key: (%d bit)\n",(ulong)uVar2);
        if (iVar3 < 1) {
          return false;
        }
        number = "Exponent:";
        pcVar6 = "Modulus:";
      }
      else {
        number = "publicExponent:";
        iVar3 = BIO_printf(param_1,"Private-Key: (%d bit, %d primes)\n",(ulong)uVar2);
        pcVar6 = "modulus:";
        if (iVar3 < 1) {
          return false;
        }
      }
      iVar3 = ASN1_bn_print(param_1,pcVar6,*(BIGNUM **)(lVar1 + 0x28),(uchar *)0x0,param_3);
      if ((iVar3 != 0) &&
         (iVar3 = ASN1_bn_print(param_1,number,*(BIGNUM **)(lVar1 + 0x30),(uchar *)0x0,param_3),
         iVar3 != 0)) {
        if (param_4 != 0) {
          iVar3 = ASN1_bn_print(param_1,"privateExponent:",*(BIGNUM **)(lVar1 + 0x38),(uchar *)0x0,
                                param_3);
          if (iVar3 == 0) {
            return false;
          }
          iVar3 = ASN1_bn_print(param_1,"prime1:",*(BIGNUM **)(lVar1 + 0x40),(uchar *)0x0,param_3);
          if (iVar3 == 0) {
            return false;
          }
          iVar3 = ASN1_bn_print(param_1,"prime2:",*(BIGNUM **)(lVar1 + 0x48),(uchar *)0x0,param_3);
          if (iVar3 == 0) {
            return false;
          }
          iVar3 = ASN1_bn_print(param_1,"exponent1:",*(BIGNUM **)(lVar1 + 0x50),(uchar *)0x0,param_3
                               );
          if (iVar3 == 0) {
            return false;
          }
          iVar3 = ASN1_bn_print(param_1,"exponent2:",*(BIGNUM **)(lVar1 + 0x58),(uchar *)0x0,param_3
                               );
          if (iVar3 == 0) {
            return false;
          }
          iVar3 = ASN1_bn_print(param_1,"coefficient:",*(BIGNUM **)(lVar1 + 0x60),(uchar *)0x0,
                                param_3);
          if (iVar3 == 0) {
            return false;
          }
          for (local_44 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x88)), local_44 < iVar3
              ; local_44 = local_44 + 1) {
            iVar3 = 1;
            uVar7 = (ulong)(local_44 + 3);
            puVar5 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x88),local_44);
LAB_0055294d:
            iVar4 = BIO_indent(param_1,param_3,0x80);
            if (iVar4 == 0) {
              return false;
            }
            if (iVar3 == 2) {
              iVar4 = BIO_printf(param_1,"exponent%d:",uVar7);
              if (iVar4 < 1) {
                return false;
              }
              iVar4 = ASN1_bn_print(param_1,"",(BIGNUM *)puVar5[1],(uchar *)0x0,param_3);
              if (iVar4 == 0) {
                return false;
              }
LAB_005529be:
              iVar3 = iVar3 + 1;
              goto LAB_0055294d;
            }
            if (iVar3 != 3) {
              iVar4 = BIO_printf(param_1,"prime%d:",uVar7);
              if (iVar4 < 1) {
                return false;
              }
              iVar4 = ASN1_bn_print(param_1,"",(BIGNUM *)*puVar5,(uchar *)0x0,param_3);
              if (iVar4 == 0) {
                return false;
              }
              if (iVar3 == 3) goto LAB_00552a2a;
              goto LAB_005529be;
            }
            iVar3 = BIO_printf(param_1,"coefficient%d:",uVar7);
            if (iVar3 < 1) {
              return false;
            }
            iVar3 = ASN1_bn_print(param_1,"",(BIGNUM *)puVar5[2],(uchar *)0x0,param_3);
            if (iVar3 == 0) {
              return false;
            }
LAB_00552a2a:
          }
        }
        if (**(int **)(param_2 + 8) == 0x390) {
          iVar3 = rsa_pss_param_print(param_1,1,*(undefined8 *)(lVar1 + 0x80),param_3);
          return iVar3 != 0;
        }
        return true;
      }
    }
  }
  return false;
}

