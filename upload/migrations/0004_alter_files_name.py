# Generated by Django 3.2.3 on 2021-05-28 13:58

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('upload', '0003_alter_files_document'),
    ]

    operations = [
        migrations.AlterField(
            model_name='files',
            name='name',
            field=models.CharField(blank=True, max_length=50),
        ),
    ]
