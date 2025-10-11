
ulong OSSL_CMP_print_to_bio
                (BIO *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  
  switch(param_5) {
  case 0:
    uVar1 = BIO_printf(param_1,"CMP %s: %s\n","EMERG");
    return (ulong)(~uVar1 >> 0x1f);
  case 1:
    uVar2 = FUN_004bf787(param_1,param_2,"ALERT",param_6);
    return uVar2;
  case 2:
    uVar2 = FUN_004bf787(param_1,param_2,&DAT_007dee1e,param_6);
    return uVar2;
  case 3:
    uVar2 = FUN_004bf787(param_1,param_2,"error",param_6);
    return uVar2;
  case 4:
    uVar2 = FUN_004bf787(param_1,param_2,"warning",param_6);
    return uVar2;
  case 5:
    uVar2 = FUN_004bf787(param_1,param_2,&DAT_007dee29,param_6);
    return uVar2;
  case 6:
    uVar2 = FUN_004bf787(param_1,param_2,"info",param_6);
    return uVar2;
  case 7:
    uVar2 = FUN_004bf787(param_1,param_2,"DEBUG",param_6);
    return uVar2;
  default:
    uVar2 = FUN_004bf787(param_1,param_2,"(unknown level)",param_6);
    return uVar2;
  }
}

