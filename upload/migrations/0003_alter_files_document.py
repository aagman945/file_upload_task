# Generated by Django 3.2.3 on 2021-05-28 13:53

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('upload', '0002_files_name'),
    ]

    operations = [
        migrations.AlterField(
            model_name='files',
            name='document',
            field=models.FileField(upload_to='media/files'),
        ),
    ]
