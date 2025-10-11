
void X509_REQ_verify_ex(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = X509_REQ_INFO_it();
  ASN1_item_verify_ex(uVar3,param_1 + 0x38,uVar2,param_1,uVar1,param_2,param_3,param_4);
  return;
}

