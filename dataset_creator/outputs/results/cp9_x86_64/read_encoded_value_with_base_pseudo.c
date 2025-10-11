
/* WARNING: Type propagation algorithm not settling */

uint * read_encoded_value_with_base(byte param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (param_1 == 0x50) {
    puVar1 = (undefined8 *)((ulong)((long)param_3 + 7U) & 0xfffffffffffffff8);
    *param_4 = *puVar1;
    return (uint *)(puVar1 + 1);
  }
  puVar2 = param_3;
  switch(param_1 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    pbVar6 = *(byte **)param_3;
    puVar2 = param_3 + 2;
    break;
  case 1:
    pbVar6 = (byte *)0x0;
    bVar3 = 0;
    do {
      uVar5 = *puVar2;
      puVar2 = (uint *)((long)puVar2 + 1);
      bVar4 = bVar3 & 0x3f;
      bVar3 = bVar3 + 7;
      pbVar6 = (byte *)((ulong)pbVar6 | (ulong)((byte)uVar5 & 0x7f) << bVar4);
    } while ((char)(byte)uVar5 < '\0');
    break;
  case 2:
    pbVar6 = (byte *)(ulong)(ushort)*param_3;
    puVar2 = (uint *)((long)param_3 + 2);
    break;
  case 3:
    pbVar6 = (byte *)(ulong)*param_3;
    puVar2 = param_3 + 1;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  case 9:
    pbVar6 = (byte *)0x0;
    uVar5 = 0;
    do {
      bVar3 = (byte)*puVar2;
      puVar2 = (uint *)((long)puVar2 + 1);
      bVar4 = (byte)uVar5;
      uVar5 = uVar5 + 7;
      pbVar6 = (byte *)((ulong)pbVar6 | (ulong)(bVar3 & 0x7f) << (bVar4 & 0x3f));
    } while ((char)bVar3 < '\0');
    if ((0x3f < uVar5) || ((bVar3 & 0x40) == 0)) break;
    pbVar6 = (byte *)((ulong)pbVar6 | -1L << ((byte)uVar5 & 0x3f));
    goto LAB_007c23cc;
  case 10:
    pbVar6 = (byte *)(long)(short)(ushort)*param_3;
    puVar2 = (uint *)((long)param_3 + 2);
    break;
  case 0xb:
    pbVar6 = (byte *)(long)(int)*param_3;
    puVar2 = param_3 + 1;
  }
  if (pbVar6 != (byte *)0x0) {
LAB_007c23cc:
    if ((param_1 & 0x70) == 0x10) {
      param_2 = param_3;
    }
    pbVar6 = pbVar6 + (long)param_2;
    if ((char)param_1 < '\0') {
      *param_4 = *(undefined8 *)pbVar6;
      return puVar2;
    }
  }
  *param_4 = pbVar6;
  return puVar2;
}

