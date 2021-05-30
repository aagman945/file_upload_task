from django.db import models

# Create your models here.
class files(models.Model):
    name = models.CharField(max_length=50, blank=True)
    description = models.CharField(max_length=255, blank=True)
    document = models.FileField(upload_to='files/')
    username = models.CharField(max_length=50, blank=True)



    def __str__(self):
        return self.name
