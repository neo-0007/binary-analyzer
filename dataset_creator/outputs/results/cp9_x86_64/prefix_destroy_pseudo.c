
undefined8 prefix_destroy(void)

{
  undefined8 *ptr;
  
  ptr = (undefined8 *)BIO_get_data();
  CRYPTO_free((void *)*ptr);
  CRYPTO_free(ptr);
  return 1;
}

