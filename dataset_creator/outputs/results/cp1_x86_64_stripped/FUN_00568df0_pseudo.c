
bool FUN_00568df0(undefined8 param_1,long param_2,undefined4 param_3,int param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int local_44;
  
  uVar2 = 0;
  lVar1 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar1 + 0x28) != 0) {
    uVar2 = FUN_004b7bb0();
  }
  iVar3 = FUN_00436480(*(undefined8 *)(lVar1 + 0x88));
  iVar4 = FUN_004abce0(param_1,param_3,0x80);
  if (iVar4 != 0) {
    pcVar7 = "RSA-PSS";
    if (**(int **)(param_2 + 8) != 0x390) {
      pcVar7 = "RSA";
    }
    iVar4 = FUN_004ae9e0(param_1,&DAT_0080836d,pcVar7);
    if (0 < iVar4) {
      if ((param_4 == 0) || (*(long *)(lVar1 + 0x38) == 0)) {
        iVar3 = FUN_004ae9e0(param_1,"Public-Key: (%d bit)\n",uVar2);
        if (iVar3 < 1) {
          return false;
        }
        pcVar8 = "Exponent:";
        pcVar7 = "Modulus:";
      }
      else {
        pcVar8 = "publicExponent:";
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        iVar3 = FUN_004ae9e0(param_1,"Private-Key: (%d bit, %d primes)\n",uVar2,iVar3 + 2);
        pcVar7 = "modulus:";
        if (iVar3 < 1) {
          return false;
        }
      }
      iVar3 = FUN_005bc920(param_1,pcVar7,*(undefined8 *)(lVar1 + 0x28),0,param_3);
      if ((iVar3 != 0) &&
         (iVar3 = FUN_005bc920(param_1,pcVar8,*(undefined8 *)(lVar1 + 0x30),0,param_3), iVar3 != 0))
      {
        if (param_4 != 0) {
          iVar3 = FUN_005bc920(param_1,"privateExponent:",*(undefined8 *)(lVar1 + 0x38),0,param_3);
          if (iVar3 == 0) {
            return false;
          }
          iVar3 = FUN_005bc920(param_1,"prime1:",*(undefined8 *)(lVar1 + 0x40),0,param_3);
          if (iVar3 == 0) {
            return false;
          }
          iVar3 = FUN_005bc920(param_1,"prime2:",*(undefined8 *)(lVar1 + 0x48),0,param_3);
          if (iVar3 == 0) {
            return false;
          }
          iVar3 = FUN_005bc920(param_1,"exponent1:",*(undefined8 *)(lVar1 + 0x50),0,param_3);
          if (iVar3 == 0) {
            return false;
          }
          iVar3 = FUN_005bc920(param_1,"exponent2:",*(undefined8 *)(lVar1 + 0x58),0,param_3);
          if (iVar3 == 0) {
            return false;
          }
          iVar3 = FUN_005bc920(param_1,"coefficient:",*(undefined8 *)(lVar1 + 0x60),0,param_3);
          if (iVar3 == 0) {
            return false;
          }
          for (local_44 = 0; iVar3 = FUN_00436480(*(undefined8 *)(lVar1 + 0x88)), local_44 < iVar3;
              local_44 = local_44 + 1) {
            iVar4 = 1;
            iVar3 = local_44 + 3;
            puVar6 = (undefined8 *)FUN_004364a0(*(undefined8 *)(lVar1 + 0x88),local_44);
LAB_0056904d:
            iVar5 = FUN_004abce0(param_1,param_3,0x80);
            if (iVar5 == 0) {
              return false;
            }
            if (iVar4 == 2) {
              iVar5 = FUN_004ae9e0(param_1,"exponent%d:",iVar3);
              if (iVar5 < 1) {
                return false;
              }
              iVar5 = FUN_005bc920(param_1,&DAT_0083e5c2,puVar6[1],0,param_3);
              if (iVar5 == 0) {
                return false;
              }
LAB_005690be:
              iVar4 = iVar4 + 1;
              goto LAB_0056904d;
            }
            if (iVar4 != 3) {
              iVar5 = FUN_004ae9e0(param_1,"prime%d:",iVar3);
              if (iVar5 < 1) {
                return false;
              }
              iVar5 = FUN_005bc920(param_1,&DAT_0083e5c2,*puVar6,0,param_3);
              if (iVar5 == 0) {
                return false;
              }
              if (iVar4 == 3) goto LAB_0056912a;
              goto LAB_005690be;
            }
            iVar3 = FUN_004ae9e0(param_1,"coefficient%d:",iVar3);
            if (iVar3 < 1) {
              return false;
            }
            iVar3 = FUN_005bc920(param_1,&DAT_0083e5c2,puVar6[2],0,param_3);
            if (iVar3 == 0) {
              return false;
            }
LAB_0056912a:
          }
        }
        if (**(int **)(param_2 + 8) == 0x390) {
          iVar3 = FUN_00568970(param_1,1,*(undefined8 *)(lVar1 + 0x80),param_3);
          return iVar3 != 0;
        }
        return true;
      }
    }
  }
  return false;
}

