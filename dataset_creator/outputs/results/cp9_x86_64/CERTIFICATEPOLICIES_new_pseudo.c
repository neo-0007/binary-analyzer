
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CERTIFICATEPOLICIES * CERTIFICATEPOLICIES_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)CERTIFICATEPOLICIES_it();
  pAVar1 = ASN1_item_new(it);
  return (CERTIFICATEPOLICIES *)pAVar1;
}

